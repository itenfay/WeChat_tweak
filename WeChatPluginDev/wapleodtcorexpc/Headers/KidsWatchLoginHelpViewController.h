//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchInfoCardView;

@interface KidsWatchLoginHelpViewController : NSObject
{
    KidsWatchInfoCardView *_infoCardView;
}

@property(retain, nonatomic) KidsWatchInfoCardView *infoCardView; // @synthesize infoCardView=_infoCardView;
- (void)initSubviews;
- (void)viewDidLoad;

@end

