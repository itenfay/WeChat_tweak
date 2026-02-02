//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCOpenReportParam, NSDictionary;

@interface GameLifeTabBarConfig : NSObject
{
    _Bool _isFromFindTab;
    unsigned int _sourceScene;
    NSDictionary *_extra;
    GCOpenReportParam *_reportParam;
    NSDictionary *_addtionUrlParams;
    CDUnknownBlockType _onCloseBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
@property(retain, nonatomic) NSDictionary *addtionUrlParams; // @synthesize addtionUrlParams=_addtionUrlParams;
@property(retain, nonatomic) GCOpenReportParam *reportParam; // @synthesize reportParam=_reportParam;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool isFromFindTab; // @synthesize isFromFindTab=_isFromFindTab;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;

@end

