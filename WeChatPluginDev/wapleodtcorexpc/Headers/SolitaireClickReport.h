//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SolitaireClickReport
{
    unsigned long long _sourceType;
    unsigned long long _clickType;
}

@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)report;

@end

