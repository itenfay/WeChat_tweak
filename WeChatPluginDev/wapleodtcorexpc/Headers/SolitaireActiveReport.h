//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SolitaireActiveReport
{
    unsigned long long _headerLength;
    unsigned long long _tailLength;
    unsigned long long _exampleLength;
    unsigned long long _activeScene;
}

@property(nonatomic) unsigned long long activeScene; // @synthesize activeScene=_activeScene;
@property(nonatomic) unsigned long long exampleLength; // @synthesize exampleLength=_exampleLength;
@property(nonatomic) unsigned long long tailLength; // @synthesize tailLength=_tailLength;
@property(nonatomic) unsigned long long headerLength; // @synthesize headerLength=_headerLength;
- (void)report;

@end

