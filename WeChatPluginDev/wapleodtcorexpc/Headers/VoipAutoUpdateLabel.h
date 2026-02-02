//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface VoipAutoUpdateLabel
{
    unsigned int m_dotCountIncresement;
    MMTimer *m_actingTimer;
    NSString *m_baseText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_baseText; // @synthesize m_baseText;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
- (void)clearActingTimer;
- (void)autoUpdateString;
- (void)dealloc;

@end

