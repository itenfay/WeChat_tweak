//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMWebPrefetchPkgResInfo
{
    NSString *_htmlTag;
    NSString *_pathInPkg;
    NSArray *_arrAttr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrAttr; // @synthesize arrAttr=_arrAttr;
@property(copy, nonatomic) NSString *pathInPkg; // @synthesize pathInPkg=_pathInPkg;
@property(copy, nonatomic) NSString *htmlTag; // @synthesize htmlTag=_htmlTag;

@end

