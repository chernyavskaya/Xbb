#! /usr/bin/env python
import os,time,subprocess
energy='8TeV'
#energy='7TeV'

def submit(job,en):
	command = 'qsub -cwd -q all.q -N %s_%s -o /shome/nmohr/VHbbAnalysis/LOG/%s.out -e /shome/nmohr/VHbbAnalysis/LOG/%s.err runAll.sh %s %s' %(job,en,job,job,job,en)
	print command
	subprocess.call([command], shell=True)

theJobs = ['ZH110','ZH125','ZH120','DY','ZH115','ZH130','ZH135','ZZ','DY120','Zmm','ST_s','TT','Zee','STbar_s','STbar_t','WZ','WW','STbar_tW','ST_tW']
if energy=='8TeV':
	theJobs = ['ZH110','ZH125','ZH120','DY','DY5070','DY70100','DY100','ZH115','ZH130','ZH135','ZZ','DY120','Zmm','ST_s','TT','Zee','STbar_s','STbar_t','WZ','WW','STbar_tW','ST_tW']


for job in theJobs:
	submit(job,energy)
	#time.sleep(10)
