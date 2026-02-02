//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EcsJumpNativeInfo
{
    NSString *_nativeUri;
    NSString *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *nativeUri; // @synthesize nativeUri=_nativeUri;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

