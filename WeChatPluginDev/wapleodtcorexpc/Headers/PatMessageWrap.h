//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PatMessageWrap : NSObject
{
    NSString *_chatUserName;
    unsigned long long _patCount;
    NSMutableArray *_patWraps;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *patWraps; // @synthesize patWraps=_patWraps;
@property(nonatomic) unsigned long long patCount; // @synthesize patCount=_patCount;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)patWrapWithServerId:(long long)arg1;
- (id)patWrapWithCreateTime:(unsigned long long)arg1 fromUserName:(id)arg2 pattedUserName:(id)arg3;
@property(readonly, nonatomic) _Bool shouldHighlightDigest;
- (id)highlightDigest;
- (id)digest;
- (_Bool)exceedsFoldCount;

@end

