//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIView, _TtC25MagicCardStarterProtocols22MagicCardStarterHandle, _TtC25MagicCardStarterProtocols23MagicCardStarterJsEvent, _TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig;
@protocol _TtP25MagicCardStarterProtocols27IMagicCardStarterBizCreator_;

@protocol _TtP25MagicCardStarterProtocols24IMagicCardStarterService_
- (NSString *)getBizAppConfigWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1;
- (void)removeAllFrameSetViewWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 rootConfig:(_TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *)arg2;
- (void)removeFrameSetViewWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 rootConfig:(_TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *)arg2 frameSetName:(NSString *)arg3;
- (void)scrollAllOnScreenFrameSetViewWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 rootConfig:(_TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *)arg2 offsetHeight:(double)arg3 listViewTop:(double)arg4;
- (void)bindFrameSetViewWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 rootConfig:(_TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *)arg2 containerView:(UIView *)arg3 frameSetName:(NSString *)arg4 frameSetData:(NSString *)arg5;
- (void)preloadWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 rootConfig:(_TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *)arg2 frameSetName:(NSString *)arg3 frameSetData:(NSString *)arg4 containerRect:(struct CGRect)arg5 preloadStrategy:(long long)arg6;
- (void)notifyJsEventWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 jsEvent:(_TtC25MagicCardStarterProtocols23MagicCardStarterJsEvent *)arg2;
- (void)deactiveWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1;
- (void)activeWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1 viewController:(MMUIViewController *)arg2;
- (void)resumeBizWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1;
- (void)pauseBizWithHandle:(_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)arg1;
- (_TtC25MagicCardStarterProtocols22MagicCardStarterHandle *)aquireBizWithBizCreator:(id <_TtP25MagicCardStarterProtocols27IMagicCardStarterBizCreator_>)arg1 instanceKey:(NSString *)arg2;
@end

