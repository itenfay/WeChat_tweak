//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol ScanTVDelegate;

@interface ScanTVHelper
{
    NSString *m_nsTVID;
    unsigned int m_uiTVDetailScene;
    id <ScanTVDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTVID; // @synthesize m_nsTVID;
@property(nonatomic) __weak id <ScanTVDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetTVItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)GetTVItemFromSVR;
- (void)StopGet;
- (void)GetTVItemByID:(id)arg1 Scene:(unsigned int)arg2;
- (void)dealloc;

@end

