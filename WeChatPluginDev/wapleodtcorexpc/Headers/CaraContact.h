//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString;

@interface CaraContact : NSObject
{
    CContact *_contact;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (id)zidl;
- (id)getDisplayName;
- (_Bool)isSessionStickyOnTop;
- (_Bool)isMinimized;
- (_Bool)isMute;
- (_Bool)isOpenIM;
- (_Bool)isGroup;
- (_Bool)isPrivate;
- (id)username;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

