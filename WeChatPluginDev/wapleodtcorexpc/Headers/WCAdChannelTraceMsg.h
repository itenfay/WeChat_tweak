//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdChannelTraceMsg : NSObject
{
    int _actType;
    int _actCount;
    NSString *_tag;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) int actCount; // @synthesize actCount=_actCount;
@property(nonatomic) int actType; // @synthesize actType=_actType;

@end

