//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, WCFinderPostSessionModel;

@protocol WCFinderPostViewControllerDelegate <NSObject>

@optional
- (void)postViewControllerPostSucForEnterScene:(unsigned long long)arg1 params:(id)arg2;
- (void)postViewControllerSaveDraftAndOpenProfile:(WCFinderPostSessionModel *)arg1;
- (void)postViewControllerDidSaveDraft;
- (void)postViewControllerCancelPostWithModel:(WCFinderPostSessionModel *)arg1;
- (void)postViewControllerFromVC:(MMUIViewController *)arg1 postSession:(WCFinderPostSessionModel *)arg2;
- (void)postViewControllerStartUpload;
@end

