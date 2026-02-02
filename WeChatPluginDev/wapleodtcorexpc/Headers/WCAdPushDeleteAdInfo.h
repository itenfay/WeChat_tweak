//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdPushDeleteAdInfo : NSObject
{
    NSString *_snsId;
    long long _deleteLevel;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long deleteLevel; // @synthesize deleteLevel=_deleteLevel;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
- (_Bool)isValid;

@end

