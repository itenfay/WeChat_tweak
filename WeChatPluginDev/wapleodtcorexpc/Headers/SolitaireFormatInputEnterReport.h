//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SolitaireFormatInputEnterReport
{
    unsigned long long _operateType;
    unsigned long long _exitType;
    unsigned long long _enterScene;
}

@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long operateType; // @synthesize operateType=_operateType;
- (void)report;

@end

