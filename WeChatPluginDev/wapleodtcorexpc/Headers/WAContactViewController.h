//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ContactsUI/CNContactViewController.h>

@class CNMutableContact;

@interface WAContactViewController : CNContactViewController
{
    CNMutableContact *_savedContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNMutableContact *savedContact; // @synthesize savedContact=_savedContact;
- (void)viewDidLoad;

@end

