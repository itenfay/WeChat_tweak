//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface UploadMContactEventHandler
{
    NSMutableArray *m_arrMobileList;
    NSMutableArray *m_arrEmailList;
    NSMutableArray *m_curUploadMobile;
    NSMutableArray *m_curUploadEmail;
    NSString *m_nsMobile;
    unsigned int m_uiUploadCount;
}

- (void).cxx_destruct;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;

@end

