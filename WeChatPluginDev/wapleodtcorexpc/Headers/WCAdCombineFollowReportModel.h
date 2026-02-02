//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdCombineFollowReportModel
{
    int _brandOpenType;
    int _brandResult;
    int _finderResult;
    int _source;
    NSString *_brandUsername;
    NSString *_finderUsername;
    NSString *_canvasDynamicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) int finderResult; // @synthesize finderResult=_finderResult;
@property(nonatomic) int brandResult; // @synthesize brandResult=_brandResult;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) int brandOpenType; // @synthesize brandOpenType=_brandOpenType;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;

@end

