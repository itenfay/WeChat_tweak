//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MSEMessageMetaDataImageItem : NSObject
{
    NSString *_toUsername;
    NSString *_imageUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_imageUrl;
+ (void)PBArrayAdd_toUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
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

