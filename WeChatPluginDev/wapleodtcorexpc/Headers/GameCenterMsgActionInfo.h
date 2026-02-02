//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgActionInfo : NSObject
{
    int _type;
    NSString *_jumpUrl;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int type; // @synthesize type=_type;

@end

