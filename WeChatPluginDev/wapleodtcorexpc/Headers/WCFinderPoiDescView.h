//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSMutableArray;
@protocol WCFinderPoiDescViewDelegate;

@interface WCFinderPoiDescView : UIView
{
    _Bool _isExpandable;
    id <WCFinderPoiDescViewDelegate> _delegate;
    double _maxWidth;
    MMUIButton *_expandButton;
    NSMutableArray *_headItemArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *headItemArray; // @synthesize headItemArray=_headItemArray;
@property(retain, nonatomic) MMUIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) _Bool isExpandable; // @synthesize isExpandable=_isExpandable;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <WCFinderPoiDescViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setIsExpand:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isExpand;
- (void)onClickExpandButton;
- (void)updateLayout;
- (id)genWordingComponentItems:(id)arg1;
- (_Bool)containTag:(id)arg1;
- (void)updateWithLineComponent:(id)arg1;

@end

