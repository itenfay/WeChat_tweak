//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayLQTHelper : NSObject
{
}

+ (void)openTinyappFromDialogWithUsername:(id)arg1 path:(id)arg2;
+ (void)openH5FromDialogWithUrl:(id)arg1;
+ (void)handleDialogActionWithBtnData:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
+ (void)showLqtDialog:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
+ (void)showLqtDialog:(id)arg1;
+ (_Bool)urlForFetch:(id)arg1;
+ (_Bool)urlForSave:(id)arg1;
+ (_Bool)urlForDetail:(id)arg1;
+ (_Bool)validUrl:(id)arg1;
+ (id)traceInfoFromUrl:(id)arg1;
+ (id)operateIdFromUrl:(id)arg1;

@end

