//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface InviteSourceInfo
{
    unsigned int _sourceTag;
    NSString *_sourceName;
    NSString *_sourceIconName;
    SEL _sourceActionSel;
}

- (void).cxx_destruct;
@property(nonatomic) SEL sourceActionSel; // @synthesize sourceActionSel=_sourceActionSel;
@property(copy, nonatomic) NSString *sourceIconName; // @synthesize sourceIconName=_sourceIconName;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned int sourceTag; // @synthesize sourceTag=_sourceTag;

@end

