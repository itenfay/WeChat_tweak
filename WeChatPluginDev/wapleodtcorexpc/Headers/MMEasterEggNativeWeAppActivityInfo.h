//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMEasterEggNativeWeAppActivityInfo
{
    NSString *_weAppUsername;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weAppUsername; // @synthesize weAppUsername=_weAppUsername;
- (_Bool)isValid;
- (void)tryParseWeAppUsernameFromActivityNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)description;
- (id)accessibilityLabel;
- (Class)activityClass;

@end

