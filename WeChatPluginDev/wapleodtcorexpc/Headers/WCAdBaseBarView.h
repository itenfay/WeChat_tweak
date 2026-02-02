//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAdBaseBarViewDelegate;

@interface WCAdBaseBarView : NSObject
{
    id <WCAdBaseBarViewDelegate> _baseDelegate;
}

+ (double)topMargin;
+ (double)bottomMargin;
+ (double)viewHeight;
@property(nonatomic) __weak id <WCAdBaseBarViewDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
- (void)updateDataItem:(id)arg1;

@end

