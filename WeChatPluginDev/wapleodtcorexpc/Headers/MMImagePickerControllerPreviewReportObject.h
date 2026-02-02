//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerReportInfo;

@interface MMImagePickerControllerPreviewReportObject
{
    unsigned int m_previewCount;
    MMImagePickerReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImagePickerReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) unsigned int m_previewCount; // @synthesize m_previewCount;
- (void)reportPickerActionInfo;
- (void)reportPicerReportInfo;
- (void)increasePreviewCount;
- (void)reportPreviewWithScene:(int)arg1;

@end

