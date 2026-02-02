//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MMFinderLiveShopShelfHeaderSubInfosView : UIView
{
    NSArray *_tuples;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)updateWithShopWindowInfo:(id)arg1;
- (id)addLine;
- (void)layoutSubviews;

@end

