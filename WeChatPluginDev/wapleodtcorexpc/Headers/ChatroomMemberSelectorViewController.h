//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class CContact, NSString;

@interface ChatroomMemberSelectorViewController : NSObject
{
    CContact *_chatroomContact;
    NSString *_customizedTitle;
}

@property(copy, nonatomic) NSString *customizedTitle; // @synthesize customizedTitle=_customizedTitle;
@property(readonly, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (id)headerTitleInSection:(long long)arg1;
- (void)viewDidLoad;
- (void)loadTitle;
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2 filterHandler:(CDUnknownBlockType)arg3;
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2;

@end
