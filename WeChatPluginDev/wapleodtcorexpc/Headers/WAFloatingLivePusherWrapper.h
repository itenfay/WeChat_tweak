//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol ITXLivePushJSAdapter;

@interface WAFloatingLivePusherWrapper
{
    id <ITXLivePushJSAdapter> _livePusher;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ITXLivePushJSAdapter> livePusher; // @synthesize livePusher=_livePusher;
- (void)stop;
- (void)play;
- (void)pause;
- (id)playerView;

@end

