.PHONY: clean All

All:
	@echo "----------Building project:[ ejemplo12 - Debug ]----------"
	@cd "ejemplo12" && "$(MAKE)" -f  "ejemplo12.mk"
clean:
	@echo "----------Cleaning project:[ ejemplo12 - Debug ]----------"
	@cd "ejemplo12" && "$(MAKE)" -f  "ejemplo12.mk" clean
