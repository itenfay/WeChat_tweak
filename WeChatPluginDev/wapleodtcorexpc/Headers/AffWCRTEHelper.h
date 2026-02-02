//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffWCRTEDelegateCallback, NSString;

@interface AffWCRTEHelper : NSObject
{
    AffWCRTEDelegateCallback *m_callBack;
}

- (void).cxx_destruct;
- (void)resetCopyAttachmentInPasteBored;
- (id)getAttachmentExpiredWording;
- (id)getCurrentTranslateLanguage;
- (id)getNameForAttachmentType:(int)arg1;
- (void)setGeneralPasteBoardString:(id)arg1;
- (id)getGeneralPastebordString;
- (id)getCurrentRecordingId;
- (void)setCallback:(id)arg1;
- (void)sayHelloAsync:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

