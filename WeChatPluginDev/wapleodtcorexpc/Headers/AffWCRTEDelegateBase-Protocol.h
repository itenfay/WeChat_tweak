//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffWCRTEDelegateCallback, NSString;

@protocol AffWCRTEDelegateBase <NSObject>

@optional
- (void)resetCopyAttachmentInPasteBored;
- (NSString *)getAttachmentExpiredWording;
- (NSString *)getCurrentTranslateLanguage;
- (NSString *)getNameForAttachmentType:(int)arg1;
- (void)setGeneralPasteBoardString:(NSString *)arg1;
- (NSString *)getGeneralPastebordString;
- (NSString *)getCurrentRecordingId;
- (void)sayHelloAsync:(unsigned long long)arg1;
- (void)setCallback:(AffWCRTEDelegateCallback *)arg1;
@end

