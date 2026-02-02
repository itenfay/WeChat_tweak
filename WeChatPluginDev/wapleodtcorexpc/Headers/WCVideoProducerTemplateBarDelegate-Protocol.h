//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, NSIndexPath, WCVideoProducerTemplateBarViewController, WCVideoProducerTemplateCellViewModel;

@protocol WCVideoProducerTemplateBarDelegate <NSObject>
- (MJVideoTemplate *)changingTempalteInTemplateBarVC:(WCVideoProducerTemplateBarViewController *)arg1;
- (void)templateBarVC:(WCVideoProducerTemplateBarViewController *)arg1 didSelectCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 repeated:(_Bool)arg3 atIndex:(NSIndexPath *)arg4;
- (_Bool)templateBarVC:(WCVideoProducerTemplateBarViewController *)arg1 willSelectCellVM:(WCVideoProducerTemplateCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)templateBarVC:(WCVideoProducerTemplateBarViewController *)arg1 willShowTemplate:(WCVideoProducerTemplateCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
@end

