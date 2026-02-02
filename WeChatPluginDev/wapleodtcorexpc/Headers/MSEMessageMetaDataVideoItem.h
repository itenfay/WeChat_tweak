//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEMessageMetaDataVideoItem : NSObject
{
    NSString *_toUsername;
    NSString *_videoUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_toUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

