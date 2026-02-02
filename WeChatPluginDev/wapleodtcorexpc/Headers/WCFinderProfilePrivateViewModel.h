//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface WCFinderProfilePrivateViewModel : NSObject
{
    UIImage *_errorIcon;
    NSString *_errorTips;
}

@property(retain, nonatomic) NSString *errorTips; // @synthesize errorTips=_errorTips;
@property(retain, nonatomic) UIImage *errorIcon; // @synthesize errorIcon=_errorIcon;
- (_Bool)shouldDisplayTab;
- (id)viewPageClassName;
- (_Bool)displayAccountBlocked;
- (_Bool)displayPrivateAccount;
- (id)displayName;

@end

