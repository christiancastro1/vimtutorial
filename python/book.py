user = {'aenstein':{'first':'alber','last':'enistein','location':'princeton'},
        'ironman':{'first':'tony','last':'stark','location':'malibu'}}


for username,userinfo in user.items():
    user = username 
    fullname = userinfo['first'] + ' ' + userinfo['last']
    location = userinfo['location']
    print ('User Name: '+ user + '\n' + 'Name: '+fullname.title()+ '\n'+ 'Location: '+ location)

def square(x):
    """x is an int. THis func will square x"""
    return x*x



