//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GCChannelTitleModel
{
    NSString *_titleName;
    unsigned long long _nubmerCnt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long nubmerCnt; // @synthesize nubmerCnt=_nubmerCnt;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
- (id)numberTitle;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (Class)bindCellClass;

@end

