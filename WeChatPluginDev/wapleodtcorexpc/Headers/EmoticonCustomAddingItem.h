//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmotionFinderLinkInfo, NSData, NSMutableArray, NSString;

@interface EmoticonCustomAddingItem : NSObject
{
    _Bool _needReportEditInfo;
    _Bool _allowsUploadWhenExceedLimit;
    unsigned long long _addSource;
    NSData *_imgData;
    EmotionFinderLinkInfo *_finderSourceInfo;
    NSString *_editSessionIdForReport;
    NSMutableArray *_editEmoticonWordings;
    unsigned long long _addWay;
    unsigned long long _addUI;
}

+ (id)createItemFromTask:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsUploadWhenExceedLimit; // @synthesize allowsUploadWhenExceedLimit=_allowsUploadWhenExceedLimit;
@property(nonatomic) unsigned long long addUI; // @synthesize addUI=_addUI;
@property(nonatomic) unsigned long long addWay; // @synthesize addWay=_addWay;
@property(retain, nonatomic) NSMutableArray *editEmoticonWordings; // @synthesize editEmoticonWordings=_editEmoticonWordings;
@property(nonatomic) _Bool needReportEditInfo; // @synthesize needReportEditInfo=_needReportEditInfo;
@property(retain, nonatomic) NSString *editSessionIdForReport; // @synthesize editSessionIdForReport=_editSessionIdForReport;
@property(retain, nonatomic) EmotionFinderLinkInfo *finderSourceInfo; // @synthesize finderSourceInfo=_finderSourceInfo;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(nonatomic) unsigned long long addSource; // @synthesize addSource=_addSource;
- (id)init;

@end

