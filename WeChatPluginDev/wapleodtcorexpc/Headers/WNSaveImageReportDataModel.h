//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WNSaveImageReportDataModel
{
    int _action;
    unsigned long long _outputStyle;
    NSString *_fontStyle;
    NSString *_bgStyle;
    unsigned long long _alignStyle;
    unsigned long long _fontWeight;
    unsigned long long _saveResult;
    unsigned long long _downloadStatus;
    NSString *_favId;
    unsigned long long _source;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) unsigned long long saveResult; // @synthesize saveResult=_saveResult;
@property(nonatomic) unsigned long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) unsigned long long alignStyle; // @synthesize alignStyle=_alignStyle;
@property(retain, nonatomic) NSString *bgStyle; // @synthesize bgStyle=_bgStyle;
@property(retain, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(nonatomic) unsigned long long outputStyle; // @synthesize outputStyle=_outputStyle;
@property(nonatomic) int action; // @synthesize action=_action;
- (id)emptyBase64String;
- (id)initDefaultDataModel;

@end

