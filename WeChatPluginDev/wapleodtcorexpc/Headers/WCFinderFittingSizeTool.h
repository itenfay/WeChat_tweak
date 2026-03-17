//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderFittingSizeTool : UIView
{
}

+ (struct CGSize)fitMinimizeFloatingSize:(struct CGSize)arg1;
+ (struct CGSize)shrink:(struct CGSize)arg1 parcelSize:(struct CGSize)arg2;
+ (struct CGSize)stretchSize:(struct CGSize)arg1 parcelSize:(struct CGSize)arg2;
+ (struct CGSize)scaleSize:(struct CGSize)arg1 parcelSize:(struct CGSize)arg2;
+ (struct CGSize)cutSize:(struct CGSize)arg1 putInSize:(struct CGSize)arg2;

@end

