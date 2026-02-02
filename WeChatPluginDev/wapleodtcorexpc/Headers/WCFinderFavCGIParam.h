//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderFavNewLifeReportInfo, NSDictionary, NSString;

@interface WCFinderFavCGIParam : NSObject
{
    _Bool _isFav;
    int _scene;
    int _sourceType;
    NSString *_feedID;
    NSString *_nonceID;
    NSDictionary *_clientUdfKv;
    FinderFavNewLifeReportInfo *_newlifeReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderFavNewLifeReportInfo *newlifeReportInfo; // @synthesize newlifeReportInfo=_newlifeReportInfo;
@property(copy, nonatomic) NSDictionary *clientUdfKv; // @synthesize clientUdfKv=_clientUdfKv;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;

@end

