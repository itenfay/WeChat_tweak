//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MJTemplateAsyncExportInfo;

@interface MJTemplateSessionExportAsyncOperation : NSObject
{
    MJTemplateAsyncExportInfo *_asyncExportInfo;
}

@property(retain, nonatomic) MJTemplateAsyncExportInfo *asyncExportInfo; // @synthesize asyncExportInfo=_asyncExportInfo;
- (void)cancelExportingCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportCreationWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
