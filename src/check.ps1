[string[]] $classes = "11J191", "11J192", "11J193", "19C199";
[string] $outputfile = "report.txt";

for ([int] $i = 0; $i -lt $classes.Count; $i++)
{
    Write-Warning -Message $classes[$i];
    $names = Get-ChildItem -Path $classes[$i] -Directory;
    $submited = New-Object System.Collections.ArrayList<string>;
    for ([int] $j = 0; $j -lt $names.Count; $j++)
    {
        #Write-Warning -Message $names[$j].Name;
        $count = (Get-ChildItem -Path $names[$j].FullName -Depth 2 | Where-Object {$_.Extension -eq ".doc" -or $_.Extension -eq ".docx"}).Length;
        if ($count -gt 0)
        {
            #Write-Warning -Message "Has";
            $submited.Add($names[$j].Name) | Out-Null;
        }
    }
    Out-File -InputObject $classes[$i] -FilePath $outputfile -Append;
    Write-Warning -Message ($classes[$i] + " have sub " + $submited.Count);
    for ([int] $k = 0; $k -lt $submited.Count; $k++)
    {
        Out-File -InputObject $submited[$k] -FilePath $outputfile -Append;
    }
}