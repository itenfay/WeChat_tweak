//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAWxMaterialAppInfo : NSObject
{
    NSString *_mime;
    NSString *_fileExt;
    NSArray *_recentAppArr;
    NSArray *_allAppArr;
    double _reqTimeLast;
}

- (void).cxx_destruct;
@property(nonatomic) double reqTimeLast; // @synthesize reqTimeLast=_reqTimeLast;
@property(retain, nonatomic) NSArray *allAppArr; // @synthesize allAppArr=_allAppArr;
@property(retain, nonatomic) NSArray *recentAppArr; // @synthesize recentAppArr=_recentAppArr;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(retain, nonatomic) NSString *mime; // @synthesize mime=_mime;

@end

