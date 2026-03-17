//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCanvasComponent;

@protocol WCCanvasClickEventManagerDelegate <NSObject>

@optional
- (void)onClickEventUpdateTitleWith:(NSString *)arg1 buttonAppearance:(_Bool)arg2 buttonEnabled:(_Bool)arg3;
- (void)onClickEventUpdateTitleWith:(NSString *)arg1;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onFinderLiveNoticeReserved;
- (WCCanvasComponent *)fetchRelatedComponent;
@end

