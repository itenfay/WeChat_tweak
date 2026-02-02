//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, NSIndexPath, WCVideoProducerTemplateCellViewModel, WCVideoProducerTemplateFlowViewController;

@protocol WCVideoProducerTemplateFlowDelegate <NSObject>
- (MJVideoTemplate *)changingTempalteInTemplateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didCancelWithCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 originalTemplate:(MJVideoTemplate *)arg3;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didCommitWithCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 originalTemplate:(MJVideoTemplate *)arg3;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didSelectCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 repeated:(_Bool)arg3 atIndex:(NSIndexPath *)arg4;
- (_Bool)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 willSelectCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didSlideToHanging:(double)arg2;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didSlideToShowing:(double)arg2;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didSlideFromOriginalTop:(double)arg2 withDiffTop:(double)arg3;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didChangeScrolling:(_Bool)arg2;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 willShowCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)templateFlowVC:(WCVideoProducerTemplateFlowViewController *)arg1 didLoadMoreWithBlock:(void (^)(NSArray *, _Bool))arg2;
@end

