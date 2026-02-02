//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface WNSearchCoverInfo : NSObject
{
    UIColor *_coverColor;
    NSArray *_subCoverInfoList;
    struct CGRect _beginRect;
    struct CGRect _endRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subCoverInfoList; // @synthesize subCoverInfoList=_subCoverInfoList;
@property(retain, nonatomic) UIColor *coverColor; // @synthesize coverColor=_coverColor;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect beginRect; // @synthesize beginRect=_beginRect;
- (id)init;

@end

