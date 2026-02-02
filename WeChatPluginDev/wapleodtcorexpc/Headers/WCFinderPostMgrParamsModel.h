//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderPostMgrParamsModel : NSObject
{
    int _userPrepareScene;
    int _commentScene;
    unsigned int _profileEnterType;
    unsigned long long _enterScene;
    unsigned long long _createFromType;
    unsigned long long _createScene;
    UIViewController *_currentVC;
    id <WCFinderPostMgrDelegate> _delegate;
    unsigned long long _shareScene;
    unsigned long long _publisherEnteryType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long publisherEnteryType; // @synthesize publisherEnteryType=_publisherEnteryType;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) unsigned int profileEnterType; // @synthesize profileEnterType=_profileEnterType;
@property(nonatomic) __weak id <WCFinderPostMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) unsigned long long createFromType; // @synthesize createFromType=_createFromType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) int userPrepareScene; // @synthesize userPrepareScene=_userPrepareScene;
- (id)init;

@end

