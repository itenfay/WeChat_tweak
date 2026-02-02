//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSArray;

@interface WCFinderFeedFlowDecorationViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    NSArray *_colors;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)initPropertiesValue;
- (id)init;

@end

