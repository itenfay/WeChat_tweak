//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MMFavBigImageFieldComponentData : NSObject
{
    NSArray *_imgComDataArr;
    unsigned long long _cellStyle;
}

@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSArray *imgComDataArr; // @synthesize imgComDataArr=_imgComDataArr;

@end

