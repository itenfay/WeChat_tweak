//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WASessionNotifyCloseItem : NSObject
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_headImageURL;
}

+ (void)initialize;
+ (void)PBArrayAdd_headImageURL;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

