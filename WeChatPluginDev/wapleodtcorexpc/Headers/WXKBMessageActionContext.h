//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, MMUIViewController;

@interface WXKBMessageActionContext : NSObject
{
    MMUIViewController *_viewController;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (id)description;
- (_Bool)isValid;

@end

