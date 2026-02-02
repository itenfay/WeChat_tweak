//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SolitaireCommonClickReport
{
    unsigned long long _clickType;
    unsigned long long _expandType;
}

@property(nonatomic) unsigned long long expandType; // @synthesize expandType=_expandType;
@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
- (void)report;

@end

