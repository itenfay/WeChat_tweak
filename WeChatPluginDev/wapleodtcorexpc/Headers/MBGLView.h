//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MagicBrushCore, NSMutableArray, UIImageView;

@interface MBGLView : UIView
{
    _Bool _useRawAxis;
    int _canvasId;
    MagicBrushCore *_mb;
    NSMutableArray *_touchableRects;
    UIImageView *_snapshotImage;
    UIView *_locationInView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *locationInView; // @synthesize locationInView=_locationInView;
@property(retain, nonatomic) UIImageView *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) NSMutableArray *touchableRects; // @synthesize touchableRects=_touchableRects;
@property(nonatomic) _Bool useRawAxis; // @synthesize useRawAxis=_useRawAxis;
@property(nonatomic) int canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) __weak MagicBrushCore *mb; // @synthesize mb=_mb;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (id)getImage;
- (void)setTouchableRects:(const float *)arg1 top:(const float *)arg2 width:(const float *)arg3 height:(const float *)arg4 count:(unsigned int)arg5;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 canvasId:(int)arg2 mb:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

